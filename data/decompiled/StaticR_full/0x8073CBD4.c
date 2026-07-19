/* Function at 0x8073CBD4, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_8073CBD4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8073CBDC
    *(0x1c + r1) = r31; // stw @ 0x8073CBE4
    *(0x18 + r1) = r30; // stw @ 0x8073CBE8
    r30 = r3;
    r31 = *(0x724 + r3); // lwz @ 0x8073CBF0
    if (<) goto 0x0x8073cc14;
    /* lis r3, 0 */ // 0x8073CBFC
    r3 = r3 + 0; // 0x8073CC00
    r0 = *(4 + r3); // lwz @ 0x8073CC04
    if (>=) goto 0x0x8073cc14;
    /* li r4, 1 */ // 0x8073CC10
    if (!=) goto 0x0x8073cc30;
    /* lis r3, 0 */ // 0x8073CC1C
    r12 = *(0 + r3); // lwzu @ 0x8073CC20
    r12 = *(0x18 + r12); // lwz @ 0x8073CC24
    /* mtctr r12 */ // 0x8073CC28
    /* bctrl  */ // 0x8073CC2C
    /* lis r4, 0 */ // 0x8073CC30
    /* slwi r0, r31, 2 */ // 0x8073CC34
    r4 = r4 + 0; // 0x8073CC38
    r4 = *(8 + r4); // lwz @ 0x8073CC40
    /* lwzx r4, r4, r0 */ // 0x8073CC44
    r4 = *(0x6c + r4); // lwz @ 0x8073CC48
    r12 = *(0 + r4); // lwz @ 0x8073CC4C
    r12 = *(0x20 + r12); // lwz @ 0x8073CC50
    /* mtctr r12 */ // 0x8073CC54
    /* bctrl  */ // 0x8073CC58
    /* lfs f0, 8(r1) */ // 0x8073CC5C
    /* stfs f0, 0x9c(r30) */ // 0x8073CC60
    r3 = *(0x2cc + r30); // lwz @ 0x8073CC64
    /* lfs f0, 0xc(r1) */ // 0x8073CC68
    /* stfs f0, 0xa0(r30) */ // 0x8073CC6C
    /* lfs f0, 0x10(r1) */ // 0x8073CC70
    /* stfs f0, 0xa4(r30) */ // 0x8073CC74
    r12 = *(0 + r3); // lwz @ 0x8073CC78
    r12 = *(0x18 + r12); // lwz @ 0x8073CC7C
    /* mtctr r12 */ // 0x8073CC80
    /* bctrl  */ // 0x8073CC84
    r0 = *(0x24 + r1); // lwz @ 0x8073CC88
    r31 = *(0x1c + r1); // lwz @ 0x8073CC8C
    r30 = *(0x18 + r1); // lwz @ 0x8073CC90
    return;
}