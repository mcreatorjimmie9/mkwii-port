/* Function at 0x80792BC8, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80792BC8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80792BDC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80792BE4
    r29 = r3;
    r3 = r3 + 0x8c; // 0x80792BEC
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x80792c04;
    /* li r3, 0 */ // 0x80792BFC
    /* b 0x80792c20 */ // 0x80792C00
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80792C10
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x80792C18
    /* srwi r3, r0, 5 */ // 0x80792C1C
    r0 = *(0x24 + r1); // lwz @ 0x80792C20
    r31 = *(0x1c + r1); // lwz @ 0x80792C24
    r30 = *(0x18 + r1); // lwz @ 0x80792C28
    r29 = *(0x14 + r1); // lwz @ 0x80792C2C
}