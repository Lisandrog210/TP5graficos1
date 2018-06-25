#include <iostream>
#include "../ScoreManager.h"
#include <string>
#include <nana/gui.hpp>
#include <nana/gui/widgets/listbox.hpp>
#include "nana/gui/widgets/label.hpp"
#include "nana/gui/widgets/button.hpp"
#include "nana/gui/widgets/listbox.hpp"

using namespace std;

int main()
{
	using namespace nana;

	ScoreManager * sm = new ScoreManager();
	
	sm->addScore(100);
	sm->finishScore();
	sm->addScore(200);
	sm->finishScore();
	sm->addScore(300);
	sm->finishScore();
	sm->addScore(400);
	sm->finishScore();
	sm->addScore(500);
	sm->finishScore();
	sm->addScore(600);
	sm->finishScore();

	int score1 = sm->getScore(0);
	int score2 = sm->getScore(1);
	int score3 = sm->getScore(2);
	int score4 = sm->getScore(3);
	int score5 = sm->getScore(4);
	int score6 = sm->getScore(5);

	string a = to_string(score1);
	string b = to_string(score2);
	string c = to_string(score3);
	string d = to_string(score4);
	string e = to_string(score5);
	string f = to_string(score6);

	// form to hold everything
	form fm;

	// listbox to be the property grid
	listbox lb(fm, nana::rectangle(10, 10, 340, 260));

	// column headers
	lb.append_header("Name", 100);
	lb.append_header("Value", 100);

	// add two items to the default category
	lb.at(0).append({ "Carlos", a });
	lb.at(0).append({ "Alberto", b });
	lb.at(0).append({ "Fernanda", c });
	lb.at(0).append({ "Agustin", d });
	lb.at(0).append({ "Tincho", e });
	lb.at(0).append({ "ElPiccitto", f });

	fm.show();
	exec();
}
