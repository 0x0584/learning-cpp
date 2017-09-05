// this function accepts a pointer to some memory.
void foo(int *mem)
{
   // this is just a pointer, a memory address.
   // nothing has been allocated on the heap when 
   // declaring this variable.
   int *mem2;
 
   // make the mem2 pointer point to the same block
   // of memory that mem points to. once again, 
   // nothing new has been allocated in heap memory.
   mem2 = mem;
 
   // change something in the memory location by
   // de-referencing it with a '*'.
   *mem2 = 1234;
 
   // at the end of this function, mem and mem2 will
   // both return 1234 when de-referenced as they both
   // point to the same block of memory.
 
   // no deletion is done here as the memory was
   // allocated outside the function (this is what
   // the function assumes).
}

int main(void)
{
   // an integer (4 bytes) is allocated in heap memory.
   int *mem = new int[5];
 
   // call a function, passing the pointer, not the
   // actual int in memory, just a pointer to it.
   foo(mem);
 
   // good memory management says that you delete the
   // allocated memory in the same scope that it was
   // created.
   delete mem;
 
   return 0;
}
