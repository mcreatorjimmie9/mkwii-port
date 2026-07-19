/* Function at 0x80825BFC, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80825BFC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80825C04
    *(0xc + r1) = r31; // stw @ 0x80825C0C
    *(8 + r1) = r30; // stw @ 0x80825C10
    r31 = *(0 + r4); // lwz @ 0x80825C14
    if (==) goto 0x0x80825c98;
    /* li r0, 0 */ // 0x80825C20
    *(0 + r4) = r0; // stw @ 0x80825C24
    if (==) goto 0x0x80825c98;
    if (==) goto 0x0x80825c90;
    /* lis r3, 0 */ // 0x80825C30
    r3 = r3 + 0; // 0x80825C34
    *(0 + r31) = r3; // stw @ 0x80825C38
    r30 = *(0 + r4); // lwz @ 0x80825C3C
    if (==) goto 0x0x80825c84;
    *(0 + r4) = r0; // stw @ 0x80825C48
    if (==) goto 0x0x80825c84;
    if (==) goto 0x0x80825c7c;
    *(0 + r30) = r3; // stw @ 0x80825C54
    r3 = *(0 + r4); // lwz @ 0x80825C58
    if (==) goto 0x0x80825c70;
    *(0 + r4) = r0; // stw @ 0x80825C64
    /* li r4, 1 */ // 0x80825C68
    FUN_80828708(r4); // bl 0x80828708
    r3 = r30;
    /* li r4, 0 */ // 0x80825C74
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x80825C88
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x80825C98
    r31 = *(0xc + r1); // lwz @ 0x80825C9C
    r30 = *(8 + r1); // lwz @ 0x80825CA0
    return;
}