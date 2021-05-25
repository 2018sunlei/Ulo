int gettid(void)
{
	return (int)syscall(__NR_gettid);
}

