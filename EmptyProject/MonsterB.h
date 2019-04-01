#pragma once
#include "Monster.h"
class MonsterB :
	public Monster
{
public:
	float fElapsed = 0.f;
	float fDelay = 0.5f;

	Vector3 vOffset = Vector3(0.f, 0.f, 0.f);

	function< void() > funcState[E_LAST];
	MONSTERASTATE eState;

	Vector3 vDir = Vector3(0.f, 0.f, 0.f);
public:
	MonsterB();
	virtual ~MonsterB();

	virtual void Init()	override;
	virtual void Update()	override;

	void OnAttack();
	void OnIdle();

	void SetMonsterB(MONSTERTYPE eType, RefV3 _vPos, RefV3 _vOffset);
};
