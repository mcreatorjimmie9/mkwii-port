/* Function at 0x80853348, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80853348(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8085335C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80853364
    r29 = r3;
    if (==) goto 0x0x808533d8;
    /* lis r4, 0 */ // 0x80853370
    /* li r5, 0x1c */ // 0x80853374
    r4 = r4 + 0; // 0x80853378
    /* li r6, 2 */ // 0x8085337C
    r3 = r3 + 0x500; // 0x80853380
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    /* lis r31, 0 */ // 0x80853388
    r3 = r29 + 0x3f4; // 0x8085338C
    r4 = r31 + 0; // 0x80853390
    /* li r5, 0xc */ // 0x80853394
    /* li r6, 0xf */ // 0x80853398
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29 + 0x388; // 0x808533A0
    r4 = r31 + 0; // 0x808533A4
}