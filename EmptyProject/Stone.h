#pragma once
#include "GameObject.h"

class LockOnCrossHair;

class Stone :
	public GameObject
{
public:
	LockOnCrossHair * lpLockOnCrossHair = nullptr;
	
	bool bExplosion = false;
public:
	Stone();
	virtual ~Stone();

	virtual void Init()	override;
	virtual void Release()	override;
	virtual void Update()	override;


	virtual void ReceiveCollider(Collider * lpOther);

};
