/* Function at 0x808F5A58, size=284 bytes */
/* Stack frame: 0 bytes */

int FUN_808F5A58(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* lis r7, 0 */ // 0x808F5A58
    /* slwi r0, r4, 1 */ // 0x808F5A5C
    r7 = r7 + 0; // 0x808F5A60
    /* slwi r9, r5, 1 */ // 0x808F5A64
    r6 = r7 + r0; // 0x808F5A68
    r8 = *(1 + r6); // lbz @ 0x808F5A6C
    r6 = r7 + r9; // 0x808F5A70
    r6 = *(1 + r6); // lbz @ 0x808F5A74
    if (==) goto 0x0x808f5b6c;
    if (==) goto 0x0x808f5b6c;
    r0 = r4 + -8; // 0x808F5A88
    if (>) goto 0x0x808f5ac0;
    if (!=) goto 0x0x808f5b20;
    if (!=) goto 0x0x808f5ab8;
    r0 = *(0x6d0 + r3); // lwz @ 0x808F5AA4
    if (>=) goto 0x0x808f5ab8;
    /* li r3, 0 */ // 0x808F5AB0
    return;
    /* li r3, 3 */ // 0x808F5AB8
    return;
    if (!=) goto 0x0x808f5b04;
    r0 = r5 + -9; // 0x808F5AC8
    if (>) goto 0x0x808f5ae8;
    r0 = *(0x6d0 + r3); // lwz @ 0x808F5AD4
    if (>=) goto 0x0x808f5b20;
    /* li r3, 0 */ // 0x808F5AE0
    return;
    if (!=) goto 0x0x808f5b20;
    r0 = *(0x6d0 + r3); // lwz @ 0x808F5AF0
    if (<=) goto 0x0x808f5b20;
    /* li r3, 3 */ // 0x808F5AFC
    return;
    r0 = r4 + -0x1a; // 0x808F5B04
    if (>) goto 0x0x808f5b20;
    if (!=) goto 0x0x808f5b20;
    /* li r3, 3 */ // 0x808F5B18
    return;
    if (>=) goto 0x0x808f5b30;
    /* li r3, 3 */ // 0x808F5B28
    return;
    if (<=) goto 0x0x808f5b3c;
    /* li r3, 0 */ // 0x808F5B34
    return;
    /* lis r3, 0 */ // 0x808F5B3C
    r3 = r3 + 0; // 0x808F5B40
    /* lbzx r0, r3, r9 */ // 0x808F5B44
    if (==) goto 0x0x808f5b5c;
    if (==) goto 0x0x808f5b64;
    /* b 0x808f5b6c */ // 0x808F5B58
    /* li r3, 0 */ // 0x808F5B5C
    return;
    /* li r3, 3 */ // 0x808F5B64
    return;
    /* li r3, 1 */ // 0x808F5B6C
    return;
}