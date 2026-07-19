/* Function at 0x808F5FF8, size=124 bytes */
/* Stack frame: 0 bytes */

int FUN_808F5FF8(int r3, int r4, int r5, int r6)
{
    r6 = *(0x9c + r3); // lhz @ 0x808F5FF8
    /* lis r4, 0 */ // 0x808F5FFC
    r0 = *(0x6fb + r3); // lbz @ 0x808F6000
    r4 = r4 + 0; // 0x808F6004
    /* slwi r5, r6, 2 */ // 0x808F6008
    /* lwzx r4, r4, r5 */ // 0x808F6010
    if (==) goto 0x0x808f6024;
    r0 = *(0x11c + r3); // lwz @ 0x808F6018
    /* slwi r4, r0, 2 */ // 0x808F601C
    r4 = r4 + 0x188; // 0x808F6020
    r0 = *(0x6fa + r3); // lbz @ 0x808F6024
    if (!=) goto 0x0x808f606c;
    /* addis r0, r4, 1 */ // 0x808F6030
    if (==) goto 0x0x808f606c;
    if (==) goto 0x0x808f6054;
    if (==) goto 0x0x808f6054;
    if (!=) goto 0x0x808f605c;
    /* li r0, 1 */ // 0x808F6054
    /* b 0x808f6060 */ // 0x808F6058
    /* li r0, 0 */ // 0x808F605C
    if (!=) goto 0x0x808f606c;
    r4 = r4 + 1; // 0x808F6068
    r3 = r4;
    return;
}