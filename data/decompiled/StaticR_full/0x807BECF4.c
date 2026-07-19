/* Function at 0x807BECF4, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807BECF4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807BECFC
    /* lis r5, 0 */ // 0x807BED00
    *(0x1c + r1) = r31; // stw @ 0x807BED08
    *(0x18 + r1) = r30; // stw @ 0x807BED0C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807BED14
    r3 = *(0 + r5); // lwz @ 0x807BED18
    r4 = *(0 + r4); // lha @ 0x807BED1C
    FUN_807C03BC(); // bl 0x807C03BC
    *(0x1a8 + r30) = r3; // stw @ 0x807BED24
    r3 = *(0x198 + r30); // lwz @ 0x807BED28
    r3 = *(0 + r3); // lwz @ 0x807BED2C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BED34
    /* clrlwi r0, r3, 0x18 */ // 0x807BED38
    r3 = *(0 + r4); // lwz @ 0x807BED3C
    /* mulli r0, r0, 0x248 */ // 0x807BED40
    r3 = *(0x14 + r3); // lwz @ 0x807BED44
    r3 = r3 + r0; // 0x807BED48
    r29 = *(0x8c + r3); // lwz @ 0x807BED4C
    if (==) goto 0x0x807bed60;
    /* li r31, 1 */ // 0x807BED58
    /* b 0x807bed64 */ // 0x807BED5C
    /* li r31, 0 */ // 0x807BED60
    r3 = *(0x198 + r30); // lwz @ 0x807BED64
    r30 = *(8 + r3); // lwz @ 0x807BED68
    r3 = r30;
    FUN_807C24F0(r3); // bl 0x807C24F0
    r4 = r3;
    if (==) goto 0x0x807bedb0;
    /* li r0, 0 */ // 0x807BED84
    if (!=) goto 0x0x807bed90;
    /* li r0, 1 */ // 0x807BED8C
    if (==) goto 0x0x807beda8;
    r3 = r30;
    /* li r4, 0 */ // 0x807BED9C
    FUN_807C2328(r3, r4); // bl 0x807C2328
    /* b 0x807bedb0 */ // 0x807BEDA4
    r3 = r30;
    FUN_807C2328(r3, r4, r3); // bl 0x807C2328
    r0 = *(0x24 + r1); // lwz @ 0x807BEDB0
    r31 = *(0x1c + r1); // lwz @ 0x807BEDB4
    r30 = *(0x18 + r1); // lwz @ 0x807BEDB8
    r29 = *(0x14 + r1); // lwz @ 0x807BEDBC
    return;
}