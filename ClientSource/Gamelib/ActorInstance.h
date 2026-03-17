
ARAT

	bool __CanInputNormalAttackCommand();




Altına ekle

#ifdef UCAN_INEK
	void Ucanınek(float z);
#endif


// ARAT

	D3DXVECTOR3					m_v3Pos;
	D3DXVECTOR3					m_v3Movement;
	BOOL						m_bNeedUpdateCollision;


// Altına ekle


#ifdef UCAN_INEK
	float						ucanınek_z;
#endif