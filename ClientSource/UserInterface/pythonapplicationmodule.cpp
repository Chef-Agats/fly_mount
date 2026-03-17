En alta gel

}	 üstüne ekle

#ifdef UCAN_INEK
PyModule_AddIntConstant(poModule, "UCAN_INEK", 1);
#else
PyModule_AddIntConstant(poModule, "UCAN_INEK", 0);
#endif

