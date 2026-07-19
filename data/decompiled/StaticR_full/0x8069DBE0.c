/* Function at 0x8069DBE0, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8069DBE0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069DBE8
    r3 = r3 + 0x260; // 0x8069DBEC
    *(0x24 + r1) = r0; // stw @ 0x8069DBF0
    *(0x1c + r1) = r31; // stw @ 0x8069DBF4
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069DBFC
    r31 = r3;
    if (==) goto 0x0x8069dc18;
    if (==) goto 0x0x8069dc6c;
    /* b 0x8069dc7c */ // 0x8069DC14
    r3 = *(0 + r3); // lwz @ 0x8069DC18
    /* slwi r0, r0, 4 */ // 0x8069DC1C
    /* lwzx r3, r3, r0 */ // 0x8069DC20
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069DC28
    /* lis r0, 0x4330 */ // 0x8069DC2C
    *(0xc + r1) = r4; // stw @ 0x8069DC30
    /* lis r3, 0 */ // 0x8069DC34
    /* lfd f3, 0(r3) */ // 0x8069DC38
    /* lis r5, 0 */ // 0x8069DC3C
    *(8 + r1) = r0; // stw @ 0x8069DC40
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x8069DC48
}