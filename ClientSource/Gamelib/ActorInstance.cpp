Arat 

	UpdateTransform(&s_matRotationZ, GetAverageSecondElapsed());
	
	
Altına ekle


#ifdef UCAN_INEK
	AddMovement(s_matRotationZ._41, s_matRotationZ._42, s_matRotationZ._43 + ucanınek_z);
#else
	AddMovement(s_matRotationZ._41, s_matRotationZ._42, s_matRotationZ._43);
#endif


Arat
void CActorInstance::AddMovement(float fx, float fy, float fz)



Altına ekle


#ifdef UCAN_INEK
void CActorInstance::Ucanınek(float z)
{
	if (m_pkHorse)
	{
		if ((m_pkHorse->ucanınek_z + z) < 0.0f)
			return;

		if ((m_pkHorse->ucanınek_z + z) == 0.0f)
			DisableSkipCollision();
		else if ((m_pkHorse->ucanınek_z + z) > 0.0f)
			EnableSkipCollision();

		switch (m_pkHorse->GetRace())
		{
		case 20285:		// Ucan binek kodu binek kodunu mob olarak giriceksiniz item olarak cağırcaksınız.
			m_pkHorse->ucanınek_z += z;
			break;
		default:
			break;
		}

		if (CRaceMotionData::NAME_WAIT == __GetCurrentMotionIndex())
			m_pkHorse->AddMovement(0.0f, 0.0f, m_pkHorse->ucanınek_z);
	}
}
#endif



Arat
	if (m_pkHorse)
	{
		m_pkHorse->AdjustDynamicCollisionMovement(c_pActorInstance);
		return;
	}



Altına ekle

#ifdef UCAN_INEK
	if (ucanınek_z > 0.0f)
		return;
#endif


Arat
	if (m_pkHorse)
	{
		m_pkHorse->__AdjustCollisionMovement(c_pGraphicObjectInstance);
		return;
	}



ALTINA EKLE



#ifdef UCAN_INEK
	if (ucanınek_z > 0.0f)
		return;
#endif



arat

void CActorInstance::__Initialize()
{ 		 // { tam altına yapiştir direkt.




Altına ekle

#ifdef UCAN_INEK
		ucanınek_z = 0.0f;
#endif