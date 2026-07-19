/* Function at 0x80635FC4, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80635FC4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80635FD4
    *(0x18 + r1) = r30; // stw @ 0x80635FD8
    *(0x14 + r1) = r29; // stw @ 0x80635FDC
    r29 = r3;
    r0 = r31 rlwinm 1; // rlwinm
    r4 = r29 + r0; // 0x80635FE8
    r3 = *(0x1b8 + r4); // lha @ 0x80635FEC
    if (<=) goto 0x0x8063601c;
    r0 = r3 + -1; // 0x80635FF8
    *(0x1b8 + r4) = r0; // sth @ 0x80635FFC
    /* extsh. r0, r0 */ // 0x80636000
    if (>) goto 0x0x8063601c;
    r0 = r31 rlwinm 2; // rlwinm
    r3 = *(4 + r29); // lwz @ 0x8063600C
    r4 = r29 + r0; // 0x80636010
    /* lfs f1, 0x1d0(r4) */ // 0x80636014
    FUN_8062FC00(); // bl 0x8062FC00
    r31 = r31 + 1; // 0x8063601C
    if (<) goto 0x0x80635fe4;
    /* li r30, 0 */ // 0x80636028
    /* lis r31, 0 */ // 0x8063602C
    /* b 0x80636064 */ // 0x80636030
    r0 = r30 rlwinm 1; // rlwinm
    r3 = r29 + r0; // 0x80636038
    r0 = *(0x1b8 + r3); // lha @ 0x8063603C
    if (>) goto 0x0x80636060;
    r3 = *(0 + r31); // lwz @ 0x80636048
    /* clrlwi r4, r30, 0x18 */ // 0x8063604C
    FUN_8061D97C(); // bl 0x8061D97C
    r4 = r3;
    r3 = r29;
    FUN_80636094(r4, r3); // bl 0x80636094
    r30 = r30 + 1; // 0x80636060
    r3 = *(0 + r31); // lwz @ 0x80636064
    /* clrlwi r4, r30, 0x18 */ // 0x80636068
    r0 = *(0x24 + r3); // lbz @ 0x8063606C
    if (<) goto 0x0x80636034;
    r0 = *(0x24 + r1); // lwz @ 0x80636078
    r31 = *(0x1c + r1); // lwz @ 0x8063607C
    r30 = *(0x18 + r1); // lwz @ 0x80636080
    r29 = *(0x14 + r1); // lwz @ 0x80636084
    return;
}