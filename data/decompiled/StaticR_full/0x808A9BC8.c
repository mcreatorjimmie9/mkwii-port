/* Function at 0x808A9BC8, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_808A9BC8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r5, 0 */ // 0x808A9BD0
    *(0x24 + r1) = r0; // stw @ 0x808A9BD4
    /* stmw r27, 0xc(r1) */ // 0x808A9BD8
    r27 = r3;
    r28 = r4;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x808A9BE8
    /* lis r3, 0 */ // 0x808A9BEC
    r4 = r4 + 0; // 0x808A9BF0
    *(0 + r27) = r4; // stw @ 0x808A9BF4
    r3 = *(0 + r3); // lwz @ 0x808A9BF8
    r0 = *(0x25 + r3); // lbz @ 0x808A9BFC
    if (==) goto 0x0x808a9c20;
    /* lis r4, 0 */ // 0x808A9C08
    /* lis r3, 0 */ // 0x808A9C0C
    /* li r5, 0xa */ // 0x808A9C10
    /* li r0, 1 */ // 0x808A9C14
    *(0 + r4) = r5; // stw @ 0x808A9C18
    *(0 + r3) = r0; // stw @ 0x808A9C1C
    /* li r29, 0 */ // 0x808A9C20
    /* li r30, 0 */ // 0x808A9C24
    /* lis r31, 0 */ // 0x808A9C28
    /* b 0x808a9c60 */ // 0x808A9C2C
    /* li r3, 0xc8 */ // 0x808A9C30
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808a9c50;
    r4 = r28;
    r5 = r27;
    r6 = r29;
    FUN_808A9CF0(r4, r5, r6); // bl 0x808A9CF0
    r4 = r27 + r30; // 0x808A9C50
    r29 = r29 + 1; // 0x808A9C54
    *(0xb0 + r4) = r3; // stw @ 0x808A9C58
}