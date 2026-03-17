PyObject * chrmgrIsPossibleEmoticon(PyObject* poSelf, PyObject* poArgs)

Arat < altına ekle >


#ifdef UCAN_INEK
PyObject* chrmgrUcanınek(PyObject* poSelf, PyObject* poArgs)
{
	float yukariAssa;
	if (!PyTuple_GetFloat(poArgs, 0, &yukariAssa))
		return Py_BadArgument();

	CPythonCharacterManager& rkChrMgr = CPythonCharacterManager::Instance();
	CInstanceBase* pkInsMain = rkChrMgr.GetMainInstancePtr();
	if (pkInsMain)
	{
		pkInsMain->GetGraphicThingInstancePtr()->Ucanınek(yukariAssa);
	}
	return Py_BuildNone();
}
#endif


Arat < altına ekle >

		{ "RegisterComboAttackNew",		chrmgrRegisterComboAttackNew,			METH_VARARGS },



#ifdef UCAN_INEK
		{ "Ucanınek",		chrmgrUcanınek,				METH_VARARGS },
#endif