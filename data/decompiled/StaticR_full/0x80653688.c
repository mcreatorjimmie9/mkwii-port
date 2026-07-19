/* Function at 0x80653688, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80653688(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80653698
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806536A0
    r30 = r3;
    if (==) goto 0x0x806536e0;
    /* lis r4, 0 */ // 0x806536AC
    /* li r5, 0x1dc */ // 0x806536B0
    r4 = r4 + 0; // 0x806536B4
    /* li r6, 4 */ // 0x806536B8
    r3 = r3 + 0x44; // 0x806536BC
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x806536C8
    FUN_80672580(r6, r3, r3, r4); // bl 0x80672580
    if (<=) goto 0x0x806536e0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}