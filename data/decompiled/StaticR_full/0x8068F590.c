/* Function at 0x8068F590, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8068F590(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r0 = r4 + -6; // 0x8068F59C
    *(0xc + r1) = r31; // stw @ 0x8068F5A4
    r31 = r3;
    if (>) goto 0x0x8069326c;
    /* lis r4, 0 */ // 0x8068F5B0
    /* slwi r0, r0, 2 */ // 0x8068F5B4
    r4 = r4 + 0; // 0x8068F5B8
    /* lwzx r4, r4, r0 */ // 0x8068F5BC
    /* mtctr r4 */ // 0x8068F5C0
    /* bctr  */ // 0x8068F5C4
    /* li r4, 0 */ // 0x8068F5C8
    FUN_80685EF4(r4, r4); // bl 0x80685EF4
    /* b 0x8069326c */ // 0x8068F5D0
    /* li r4, 0 */ // 0x8068F5D4
    FUN_80685EF4(r4, r4); // bl 0x80685EF4
}