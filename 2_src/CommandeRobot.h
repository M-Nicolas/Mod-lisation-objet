#ifndef _COMMANDE_ROBOT_H_
#define _COMMANDE_ROBOT_H_

#include "Commande.h"
#include "Invocateur.h"
using namespace std;

class CommandeRobot : public Commande
{
protected:
	static Robot _r;
public:
	CommandeRobot(Robot r)
	: _r(r)
	{}
};

class Avancer : public CommandRobot
{
public:
	static Avancer _avancer;
	int x;
	int y;
	Avancer(){}
	executer(){
		_r.avancer(x, y);
		add_to_prec(this);
	}
	Commande consrtVirtuel(Invocateur inv){
		Commande av = new Avancer();
		av.x = inv.get_int();
		av.y = inv.get_int();
		return av;
	}
	desexecuter(){
		_r.avancer(-x, -y);		
	}
};

class Tourner : public CommandeRobot {
private:
	string _prec_direction;
public:
	static Tourner _tourner;
	string _direction;
	Tourner(){
		_prec_direction = _r.get_direction();
	}
	void executer(){
		_r.tourner(_direction);
		add_to_prec(this);
	}
	Commande constructeurVirtuel(Invocateur inv){
		Commande tr = new Tourner();
		tr._direction = inv.get_string();
		return tr;
	}
	desexecuter(){
		_r.tourner(_prec_direction);		
	}
};

class Saisir : public CommandeRobot {
public:
	Objet _obj;
	static Saisir _saisir;
	Saisir(){}
	void executer(){
		_r.saisir();
		add_to_prec(this);
	}
	Commande constructeurVirtuel(Invocateur inv){
		Commande sa = new Saisir();
		sa._obj = new Objet(inv.get_int);
		return sa;
	}
	desexecuter(){
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
	Commande constructeurVirtuel(Invocateur inv){
		return new Poser();
	}
	desexecuter(){
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
	Commande constructeurVirtuel(Invocateur inv){
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
	Commande constructeurVirtuel(Invocateur inv){
		Commande rp = new RencontrerPlot();
		rp._plot = new Plot(inv.get_int());
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
	Commande constructeurVirtuel(Invocateur inv){
		return new EvaluerPlot();
	}
};




// class Saisir : public CommandeRobot {
// private:
// public:
// 	static Saisir _saisir;
// 	Saisir(){}
// 	void executer(){
// 		_r.saisir();
// 		add_to_prec(this);
// 	}
// 	Commande constructeurVirtuel(Invocateur inv){
// 		return new Saisir();
// 	}
// 	desexecuter(){
// 		_r.poser();		
// 	}
// };


#endif