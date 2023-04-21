int buscar (char c, char *cadena) {

  for (int i = 0; cadena[i] != '\0'; i++)
    {

      if (cadena[i] == 'c')
	{

	  return i;

	}

    }

  return -1;

}

