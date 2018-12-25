#pragma once
#include <vector>
#include "Element.h"
#include "eigen/Eigen/Dense"
using namespace Eigen;
using namespace std;
#define MAX 100
class Solver
{

	Element * elements[MAX];
	Element * voltageSources[MAX];
	int elementsCount;
	int VSCount;
	MatrixXcf mat;
public:
	Solver();

	Element * getElements(int size);
	Element * getVSs(int size);
	void execute();
	void firstSquare();
	complex<float>SumOfZConnected(int node);

	complex<float>SumOfZConnectedToX(int node1, int node2);
	void secondSquare();
	void thirdSquare();
	int & getElementsCountByRef();
	int & getVCByRef();
	int getElementsCount();
	//void displaySolution();
	bool isPassive(int i);
	~Solver();
};

