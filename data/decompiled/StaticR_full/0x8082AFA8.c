/* Function at 0x8082AFA8, size=72 bytes */
/* Stack frame: 0 bytes */

int FUN_8082AFA8(int r3, int r4)
{
    r0 = *(0x7c + r3); // lwz @ 0x8082AFA8
    /* li r4, 0 */ // 0x8082AFAC
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x8082AFB0
    if (!=) goto 0x0x8082afe8;
    r0 = *(0x78 + r3); // lwz @ 0x8082AFB8
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8082AFBC
    if (==) goto 0x0x8082afe8;
    r0 = *(4 + r3); // lwz @ 0x8082AFC4
    /* lis r3, 0 */ // 0x8082AFC8
    r3 = r3 + 0; // 0x8082AFCC
    /* mulli r0, r0, 0x74 */ // 0x8082AFD0
    r3 = r3 + r0; // 0x8082AFD4
    r0 = *(0x58 + r3); // lbz @ 0x8082AFD8
    if (!=) goto 0x0x8082afe8;
    /* li r4, 1 */ // 0x8082AFE4
    r3 = r4;
    return;
}