int    new_base_printer(unsigned long nbr, const char *base)
{
    int    s;

    s = 1;
    if (nbr >= (unsigned long) strlen(base))
    {
        s = new_base_printer(nbr / strlen(base), base);
        return (s + new_base_printer(nbr % strlen(base), base));
    }
    else
    {
        if (nbr < 0)
            nbr *= -1;
        putchar(base[nbr]);
        return (s);
    }
}