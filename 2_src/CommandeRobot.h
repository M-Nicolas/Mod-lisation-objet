#ifndef _COMMANDE_ROBOT_H_
#define _COMMANDE_ROBOT_H_

#include "Commande.h"
#include "Invocateur.h"
#include "Robot.h"
using namespace std;

class CommandeRobot : public Commande
{
protected:
	static Robot _r;
public:
	CommandeRobot(Robot r){
		_r = r;
	}

	CommandeRobot() = default;
};

class Avancer : public CommandeRobot {
private:
	int x;
	int y;
public:
	static Avancer _avancer;
	Avancer();
	void executer(){
		_r.avancer(x, y);
		add_to_prec(this);
	}

	Commande* consrtVirtuel(Invocateur& inv){
		Avancer* av = new Avancer();
		av->x = inv.get_int();
		av->y = inv.get_int();
		return av;
	}

	void desexecuter(){
		_r.avancer(-x, -y);		
	}
};

class Tourner : public CommandeRobot {
private:
	string _prec_direction;
	string _direction;
public:
	static Tourner _tourner;
	Tourner(){
		_prec_direction = _r.get_direction();
	}

	void executer(){
		_r.tourner(_direction);
		add_to_prec(this);
	}

	Commande* consrtVirtuel(Invocateur& inv){
		Tourner* tr = new Tourner();
		tr->_direction = inv.get_string();
		return tr;
	}

	void desexecuter(){
		_r.tourner(_prec_direction);		
	}
};

class Saisir : public CommandeRobot {
private:
	Objet _obj;
public:
	static Saisir _saisir;
	Saisir(){}

	void executer(){
		_r.saisir(_obj);
		add_to_prec(this);
	}

	Commande* consrtVirtuel(Invocateur& inv){
		Saisir* sa = new Saisir();
		sa->_obj = Objet(inv.get_int());
		return sa;
	}

	void desexecuter(){
		_r.poser();		
	}
};

class Poser : public CommandeRobot {
private:
	Objet _objPose;
public:
	static Poser _poser;
	Poser(){
		_objPose = _r.get_objet();
	}

	void executer(){
		_r.poser();
		add_to_prec(this);
	}

	Commande* consrtVirtuel(Invocateur& inv){
		return new Poser();
	}

	void desexecuter(){
		_r.saisir(_objPose);		
	}
};

class Peser : public CommandeRobot {
private:
public:
	static Peser _peser;
	Peser(){}

	void executer(){
		_r.peser();
	}

	Commande* consrtVirtuel(Invocateur& inv){
		return new Peser();
	}
};

class RencontrerPlot : public CommandeRobot {
private:
public:
	static RencontrerPlot _rencontrerPlot;
	Plot _plot;
	RencontrerPlot(){}

	void executer(){
		_r.rencontrerPlot(_plot);
	}

	Commande* consrtVirtuel(Invocateur& inv){
		RencontrerPlot* rp = new RencontrerPlot();
		rp->_plot = Plot(inv.get_int());
		return rp;
	}
};

class EvaluerPlot : public CommandeRobot {
private:
public:
	static EvaluerPlot _evaluerPlot;
	EvaluerPlot(){}

	void executer(){
		cout << "le plot fait " << _r.evaluerPlot() << endl;
	}

	Commande* consrtVirtuel(Invocateur& inv){
		return new EvaluerPlot();
	}
};

class Figer : public CommandeRobot {
private:
public:
	static Figer _figer;
	Figer(){}

	void executer(){
		_r.figer();
		add_to_prec(this);
	}

	Commande* consrtVirtuel(Invocateur& inv){
		return new Figer();
	}

	void desexecuter(){
		_r.repartir();		
	}
};

class Repartir : public CommandeRobot {
private:
public:
	static Repartir _repartir;
	Repartir(){}

	void executer(){
		_r.repartir();
		add_to_prec(this);
	}

	Commande* consrtVirtuel(Invocateur& inv){
		return new Repartir();
	}

	void desexecuter(){
		_r.figer();		
	}
};

#endif
