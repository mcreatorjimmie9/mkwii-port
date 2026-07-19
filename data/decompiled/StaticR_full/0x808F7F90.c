/* Function at 0x808F7F90, size=100 bytes */
/* Stack frame: 0 bytes */

void FUN_808F7F90(int r3, int r4, int r5, int r6)
{
    if (<) goto 0x0x808f7fa0;
    /* li r3, 0 */ // 0x808F7F98
    return;
    if (!=) goto 0x0x808f7fc0;
    /* lis r5, 0 */ // 0x808F7FA8
    /* slwi r0, r4, 2 */ // 0x808F7FAC
    r5 = *(0 + r5); // lwz @ 0x808F7FB0
    r5 = *(0x98 + r5); // lwz @ 0x808F7FB4
    r5 = r5 + r0; // 0x808F7FB8
    r5 = *(0x12c + r5); // lwz @ 0x808F7FBC
    r0 = r5 + -0x18; // 0x808F7FC0
    /* li r6, 0 */ // 0x808F7FC4
    if (>) goto 0x0x808f7fd4;
    /* li r6, 1 */ // 0x808F7FD0
    if (==) goto 0x0x808f7fe8;
    r5 = r4;
    /* li r4, 0 */ // 0x808F7FE0
    /* b 0x808f823c */ // 0x808F7FE4
    r6 = r4;
    /* li r4, 0 */ // 0x808F7FEC
    /* b 0x808f80d8 */ // 0x808F7FF0
}