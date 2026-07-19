/* Function at 0x805B9C78, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805B9C78(int r3, int r5)
{
    /* lis r5, 0 */ // 0x805B9C78
    r5 = r5 + 0; // 0x805B9C7C
    r5 = *(0xf8 + r5); // lwz @ 0x805B9C80
    if (==) goto 0x0x805b9cbc;
    r0 = *(0 + r5); // lwz @ 0x805B9C8C
    *(0 + r4) = r0; // stw @ 0x805B9C90
    r0 = *(4 + r5); // lwz @ 0x805B9C94
    *(4 + r4) = r0; // stw @ 0x805B9C98
    r0 = *(8 + r5); // lwz @ 0x805B9C9C
    *(8 + r4) = r0; // stw @ 0x805B9CA0
    r0 = *(0x10 + r3); // lwz @ 0x805B9CA4
    *(0xc + r4) = r0; // sth @ 0x805B9CA8
    r0 = *(0x14 + r3); // lwz @ 0x805B9CAC
    /* li r3, 1 */ // 0x805B9CB0
    *(0xe + r4) = r0; // sth @ 0x805B9CB4
    return;
    /* li r3, 0 */ // 0x805B9CBC
    return;
}