/* Function at 0x808AF808, size=156 bytes */
/* Stack frame: 0 bytes */

int FUN_808AF808(int r3)
{
    if (<) goto 0x0x808af820;
    if (>=) goto 0x0x808af820;
    r3 = r3 + 0x2454; // 0x808AF818
    return;
    /* li r0, 0 */ // 0x808AF824
    if (<) goto 0x0x808af838;
    if (>=) goto 0x0x808af838;
    /* li r0, 1 */ // 0x808AF834
    /* li r0, 0x270f */ // 0x808AF83C
    if (==) goto 0x0x808af848;
    r0 = r3 + 0x2498; // 0x808AF844
    if (==) goto 0x0x808af880;
    /* li r0, 0 */ // 0x808AF854
    if (<) goto 0x0x808af868;
    if (>=) goto 0x0x808af868;
    /* li r0, 1 */ // 0x808AF864
    /* li r0, 0x270f */ // 0x808AF86C
    if (==) goto 0x0x808af878;
    r0 = r3 + 0x2498; // 0x808AF874
    r3 = r0;
    return;
    if (!=) goto 0x0x808af890;
    /* li r3, 0x23f8 */ // 0x808AF888
    return;
    /* li r3, 0x270f */ // 0x808AF894
    /* bnelr  */ // 0x808AF898
    /* li r3, 0x245c */ // 0x808AF89C
    return;
}