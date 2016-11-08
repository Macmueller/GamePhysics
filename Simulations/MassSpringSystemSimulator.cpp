#include "MassSpringSystemSimulator.h"
#include <vector>

struct MassPoint
{
	Vec3 position;
	Vec3 velocity;
	bool isFixed;
};

struct Spring
{
	int masspoint1;
	int masspoint2;
	float initialLength;
};



// Variables
std::vector<MassPoint> v_massPoints;
std::vector<Spring> v_springs;

// Constructors
MassSpringSystemSimulator::MassSpringSystemSimulator()
{
	m_iTestCase = 0;
	m_fMass = 10;
	m_fStiffness = 40;
	m_fDamping = 0;
	m_iIntegrator = 0;
	v_massPoints = std::vector<MassPoint>();
	v_springs = std::vector<Spring>();
}



// Functions
const char*  MassSpringSystemSimulator::getTestCasesStr()
{
	return "Euler,Midpoint";
}

void MassSpringSystemSimulator::initUI(DrawingUtilitiesClass* DUC)
{
	
}

void MassSpringSystemSimulator::reset()
{
	m_mouse.x = m_mouse.y = 0;
	m_trackmouse.x = m_trackmouse.y = 0;
	m_oldtrackmouse.x = m_oldtrackmouse.y = 0;
}

void MassSpringSystemSimulator::drawFrame(ID3D11DeviceContext* pd3dImmediateContext)
{
	
}

void MassSpringSystemSimulator::notifyCaseChanged(int testCase)
{
	
}

void MassSpringSystemSimulator::externalForcesCalculations(float timeElapsed)
{
	
}

void MassSpringSystemSimulator::simulateTimestep(float timeStep)
{
	
}

void MassSpringSystemSimulator::onClick(int x, int y)
{
	
}

void MassSpringSystemSimulator::onMouse(int x, int y)
{
	
}

// Specific Functions
void MassSpringSystemSimulator::setIntegrator(int integrator)
{
	m_iIntegrator = integrator;
};

void MassSpringSystemSimulator::setMass(float mass)
{
	m_fMass = mass;
};

void MassSpringSystemSimulator::setStiffness(float stiffness)
{
	m_fStiffness = stiffness;
};

void MassSpringSystemSimulator::setDampingFactor(float damping)
{
	m_fDamping = damping;
};

int MassSpringSystemSimulator::addMassPoint(Vec3 position, Vec3 Velocity, bool isFixed)
{
	v_massPoints.push_back({position, Velocity, isFixed});
	return v_massPoints.size() - 1;
};

void MassSpringSystemSimulator::addSpring(int masspoint1, int masspoint2, float initialLength)
{
	v_springs.push_back({masspoint1, masspoint2, initialLength});
};

int MassSpringSystemSimulator::getNumberOfMassPoints()
{
	return v_massPoints.size();
};

int MassSpringSystemSimulator::getNumberOfSprings()
{
	return v_springs.size();
};

Vec3 MassSpringSystemSimulator::getPositionOfMassPoint(int index)
{
	return v_massPoints[index].position;
};

Vec3 MassSpringSystemSimulator::getVelocityOfMassPoint(int index)
{
	return v_massPoints[index].velocity;
};

void MassSpringSystemSimulator::applyExternalForce(Vec3 force)
{
};
