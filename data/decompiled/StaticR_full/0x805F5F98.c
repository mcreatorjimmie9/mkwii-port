/* Function at 0x805F5F98, size=184 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F5F98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x28 + r1) = r30; // stw @ 0x805F5FB0
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x805F5FB8
    r29 = r3;
    if (==) goto 0x0x805f5fd0;
    /* lis r5, 0 */ // 0x805F5FC4
    /* lfs f2, 0(r5) */ // 0x805F5FC8
    /* b 0x805f5fd8 */ // 0x805F5FCC
    /* lis r5, 0 */ // 0x805F5FD0
    /* lfs f2, 0(r5) */ // 0x805F5FD4
    /* frsp f0, f2 */ // 0x805F5FD8
    /* lis r5, 0 */ // 0x805F5FDC
    /* lfs f1, 0(r5) */ // 0x805F5FE0
    /* stfs f2, 8(r1) */ // 0x805F5FE8
    /* li r0, 2 */ // 0x805F5FEC
    /* stfs f1, 0xc(r1) */ // 0x805F5FF0
    /* stfs f1, 0x10(r1) */ // 0x805F5FF4
    /* stfs f0, 0x28(r3) */ // 0x805F5FF8
    /* stfs f1, 0x2c(r3) */ // 0x805F5FFC
    /* stfs f1, 0x30(r3) */ // 0x805F6000
    if (==) goto 0x0x805f600c;
    /* li r0, 1 */ // 0x805F6008
    r3 = r0;
    FUN_805F520C(r3); // bl 0x805F520C
    r0 = *(4 + r29); // lwz @ 0x805F6014
    *(0 + r29) = r30; // stw @ 0x805F6018
    if (==) goto 0x0x805f6034;
    r0 = *(0x34 + r29); // lhz @ 0x805F6024
    *(4 + r29) = r31; // stw @ 0x805F6028
    r0 = r0 | 1; // 0x805F602C
    *(0x34 + r29) = r0; // sth @ 0x805F6030
    r0 = *(0x34 + r1); // lwz @ 0x805F6034
    r31 = *(0x2c + r1); // lwz @ 0x805F6038
    r30 = *(0x28 + r1); // lwz @ 0x805F603C
    r29 = *(0x24 + r1); // lwz @ 0x805F6040
    return;
}