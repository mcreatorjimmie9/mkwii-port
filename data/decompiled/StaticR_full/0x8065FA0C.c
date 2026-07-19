/* Function at 0x8065FA0C, size=132 bytes */
/* Stack frame: 0 bytes */

void FUN_8065FA0C(int r4, int r5, int r6)
{
    /* lis r6, 0 */ // 0x8065FA0C
    r6 = *(0 + r6); // lwz @ 0x8065FA10
    r6 = *(0x98 + r6); // lwz @ 0x8065FA14
    r6 = *(0x3c4 + r6); // lwz @ 0x8065FA18
    r0 = r6 + -0x25; // 0x8065FA1C
    if (>) goto 0x0x8065fa5c;
    if (==) goto 0x0x8065fa3c;
    /* li r0, 0xb */ // 0x8065FA30
    *(0x9c + r3) = r0; // stw @ 0x8065FA34
    return;
    if (==) goto 0x0x8065fa50;
    /* li r0, 0xa */ // 0x8065FA44
    *(0x9c + r3) = r0; // stw @ 0x8065FA48
    return;
    /* li r0, 9 */ // 0x8065FA50
    *(0x9c + r3) = r0; // stw @ 0x8065FA54
    return;
    if (==) goto 0x0x8065fa70;
    /* li r0, 5 */ // 0x8065FA64
    *(0x9c + r3) = r0; // stw @ 0x8065FA68
    return;
    if (==) goto 0x0x8065fa84;
    /* li r0, 4 */ // 0x8065FA78
    *(0x9c + r3) = r0; // stw @ 0x8065FA7C
    return;
    /* li r0, 3 */ // 0x8065FA84
    *(0x9c + r3) = r0; // stw @ 0x8065FA88
    return;
}