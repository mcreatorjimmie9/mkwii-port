/* Function at 0x8060E1D4, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8060E1D4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8060E1E4
    r31 = r31 + 0; // 0x8060E1E8
    *(8 + r1) = r30; // stw @ 0x8060E1EC
    r30 = r3;
    r4 = *(0 + r3); // lwz @ 0x8060E1F4
    r4 = *(4 + r4); // lwz @ 0x8060E1F8
    r0 = *(0xc + r4); // lwz @ 0x8060E1FC
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060E200
    if (==) goto 0x0x8060e288;
    r4 = *(0x18c + r3); // lha @ 0x8060E208
    r0 = r4 + -1; // 0x8060E20C
    *(0x18c + r3) = r0; // sth @ 0x8060E210
    /* extsh. r0, r0 */ // 0x8060E214
    if (>) goto 0x0x8060e260;
    r4 = *(0 + r3); // lwz @ 0x8060E21C
    r4 = *(4 + r4); // lwz @ 0x8060E220
    r0 = *(0xc + r4); // lwz @ 0x8060E224
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060E22C
    FUN_8061E010(); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060E234
    /* li r4, 0x116 */ // 0x8060E238
    /* lfs f1, 0(r31) */ // 0x8060E23C
    r12 = *(0xe0 + r12); // lwz @ 0x8060E240
    /* mtctr r12 */ // 0x8060E244
    /* bctrl  */ // 0x8060E248
    /* li r0, 0 */ // 0x8060E24C
    *(0x18c + r30) = r0; // sth @ 0x8060E250
    r3 = *(0x260 + r30); // lwz @ 0x8060E254
    /* li r4, 0 */ // 0x8060E258
    FUN_80642784(r4); // bl 0x80642784
    /* lfs f1, 0x178(r30) */ // 0x8060E260
    /* lis r3, 0 */ // 0x8060E264
    /* lfs f0, 0x44(r31) */ // 0x8060E268
    /* fsubs f0, f1, f0 */ // 0x8060E26C
    /* stfs f0, 0x178(r30) */ // 0x8060E270
    /* lfs f1, 0(r3) */ // 0x8060E274
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060E278
    if (<=) goto 0x0x8060e2a8;
    /* stfs f1, 0x178(r30) */ // 0x8060E280
    /* b 0x8060e2a8 */ // 0x8060E284
    /* lfs f2, 0x178(r3) */ // 0x8060E288
    /* lfs f1, 0x48(r31) */ // 0x8060E28C
    /* lfs f0, 4(r31) */ // 0x8060E290
    /* fadds f1, f2, f1 */ // 0x8060E294
    /* stfs f1, 0x178(r3) */ // 0x8060E298
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8060E29C
    if (>=) goto 0x0x8060e2a8;
    /* stfs f0, 0x178(r3) */ // 0x8060E2A4
    r0 = *(0x14 + r1); // lwz @ 0x8060E2A8
    r31 = *(0xc + r1); // lwz @ 0x8060E2AC
    r30 = *(8 + r1); // lwz @ 0x8060E2B0
    return;
}