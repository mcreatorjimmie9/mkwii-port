/* Function at 0x8078DD28, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8078DD28(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8078DD38
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8078DD40
    r30 = r3;
    if (==) goto 0x0x8078dd94;
    /* li r4, 0 */ // 0x8078DD4C
    r3 = r3 + 0x94; // 0x8078DD50
    FUN_8078FDC8(r4, r3); // bl 0x8078FDC8
    if (==) goto 0x0x8078dd84;
    /* lis r4, 0 */ // 0x8078DD60
    r3 = r30 + 0x80; // 0x8078DD64
    r4 = r4 + 0; // 0x8078DD68
    /* li r5, 4 */ // 0x8078DD6C
    /* li r6, 4 */ // 0x8078DD70
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8078DD7C
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078dd94;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8078DD98
    r30 = *(8 + r1); // lwz @ 0x8078DD9C
    r0 = *(0x14 + r1); // lwz @ 0x8078DDA0
}