/* Function at 0x8065BDD4, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8065BDD4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8065BDDC
    *(0x14 + r1) = r0; // stw @ 0x8065BDE0
    *(0xc + r1) = r31; // stw @ 0x8065BDE4
    r31 = r3;
    r5 = *(0 + r5); // lwz @ 0x8065BDEC
    r5 = *(0 + r5); // lwz @ 0x8065BDF0
    r0 = *(0 + r5); // lwz @ 0x8065BDF4
    if (<) goto 0x0x8065be08;
    if (<=) goto 0x0x8065be2c;
    if (<) goto 0x0x8065be18;
    if (<=) goto 0x0x8065be2c;
    if (<) goto 0x0x8065be40;
    if (<=) goto 0x0x8065be38;
    /* b 0x8065be40 */ // 0x8065BE28
    /* li r0, 0x8d */ // 0x8065BE2C
    *(0x19fc + r3) = r0; // stw @ 0x8065BE30
    /* b 0x8065be40 */ // 0x8065BE34
    /* li r0, 0x8e */ // 0x8065BE38
    *(0x19fc + r3) = r0; // stw @ 0x8065BE3C
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 1 */ // 0x8065BE4C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x8065BE54
    r31 = *(0xc + r1); // lwz @ 0x8065BE58
    return;
}