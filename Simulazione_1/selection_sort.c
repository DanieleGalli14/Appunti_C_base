// SELECTION SORT

void scambia(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return;
}

void selection_sort(struct nodo *p)
{
    struct nodo *q;
    while (p != NULL)
    {
        q = p->next;
        while (q != NULL)
        {
            if (p->info > q->info)
            scambia(&p->info, &q->info);
            q = q->next;
        }
        p = p->next;
    }
    return;
}
