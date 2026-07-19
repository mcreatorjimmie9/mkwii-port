/* Function at 0x80828800, size=152 bytes */
/* Stack frame: 0 bytes */

int FUN_80828800(int r3, int r4)
{
    if (==) goto 0x0x8082883c;
    if (==) goto 0x0x80828844;
    if (==) goto 0x0x80828868;
    if (==) goto 0x0x80828870;
    if (==) goto 0x0x80828878;
    if (==) goto 0x0x80828880;
    if (==) goto 0x0x80828888;
    /* b 0x80828890 */ // 0x80828838
    /* li r3, 3 */ // 0x8082883C
    return;
    /* mulli r0, r3, 0x74 */ // 0x80828844
    /* lis r3, 0 */ // 0x80828848
    r3 = r3 + 0; // 0x8082884C
    r3 = r3 + r0; // 0x80828850
    r0 = *(0x28 + r3); // lwz @ 0x80828854
    /* clrlwi r3, r0, 0x18 */ // 0x80828858
    r0 = r3 + 2; // 0x8082885C
    /* clrlwi r3, r0, 0x18 */ // 0x80828860
    return;
    /* li r3, 0x14 */ // 0x80828868
    return;
    /* li r3, 5 */ // 0x80828870
    return;
    /* li r3, 5 */ // 0x80828878
    return;
    /* li r3, 4 */ // 0x80828880
    return;
    /* li r3, 0x14 */ // 0x80828888
    return;
    /* li r3, 0 */ // 0x80828890
    return;
}