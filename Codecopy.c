
void gen_swap(void *source, void *destination, unsigned int bytes)
{
	char * copy_source;
	char * copy_destination;
	int index=0;
	copy_source=(char *)source;
	copy_destination=(char *)destination;
	while (bytes)
	{
		*(copy_destination+index)=*(copy_source+index);
		++index;
		--bytes;
	}
}