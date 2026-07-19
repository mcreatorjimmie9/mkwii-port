/* Function at 0x8069DAE4, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8069DAE4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069DAEC
    r3 = r3 + 0x260; // 0x8069DAF0
    *(0x24 + r1) = r0; // stw @ 0x8069DAF4
    *(0x1c + r1) = r31; // stw @ 0x8069DAF8
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069DB00
    r31 = r3;
    if (==) goto 0x0x8069db1c;
    if (==) goto 0x0x8069db30;
    /* b 0x8069db80 */ // 0x8069DB18
    /* lis r5, 0 */ // 0x8069DB1C
    /* li r4, 1 */ // 0x8069DB20
    /* lfs f1, 0(r5) */ // 0x8069DB24
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8069db80 */ // 0x8069DB2C
    r3 = *(0 + r3); // lwz @ 0x8069DB30
    /* slwi r0, r0, 4 */ // 0x8069DB34
    /* lwzx r3, r3, r0 */ // 0x8069DB38
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069DB40
    /* lis r0, 0x4330 */ // 0x8069DB44
    *(0xc + r1) = r4; // stw @ 0x8069DB48
    /* lis r3, 0 */ // 0x8069DB4C
    /* lfd f3, 0(r3) */ // 0x8069DB50
}