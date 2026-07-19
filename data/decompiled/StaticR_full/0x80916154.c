/* Function at 0x80916154, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80916154(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80916164
    r4 = r31 + 0; // 0x80916168
    *(0x18 + r1) = r30; // stw @ 0x8091616C
    /* lis r30, 0 */ // 0x80916170
    r30 = r30 + 0; // 0x80916174
    *(0x14 + r1) = r29; // stw @ 0x80916178
    /* lis r29, 0 */ // 0x8091617C
    r29 = r29 + 0; // 0x80916180
    /* lfs f1, 0(r30) */ // 0x80916184
    r3 = r29 + 0x10; // 0x80916188
    /* lfs f0, 0x44(r30) */ // 0x8091618C
    /* stfs f1, 0x10(r29) */ // 0x80916190
    r5 = r29 + 4; // 0x80916194
    /* stfs f1, 4(r3) */ // 0x80916198
    /* stfs f0, 8(r3) */ // 0x8091619C
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x809161A4
    r3 = r29 + 0x28; // 0x809161A8
    /* lfs f0, 0x60(r30) */ // 0x809161AC
    r4 = r31 + 0; // 0x809161B0
    /* stfs f1, 0x28(r29) */ // 0x809161B4
    r5 = r29 + 0x1c; // 0x809161B8
    /* stfs f0, 4(r3) */ // 0x809161BC
    /* stfs f1, 8(r3) */ // 0x809161C0
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x809161C8
    r31 = *(0x1c + r1); // lwz @ 0x809161CC
    r30 = *(0x18 + r1); // lwz @ 0x809161D0
    r29 = *(0x14 + r1); // lwz @ 0x809161D4
    return;
}