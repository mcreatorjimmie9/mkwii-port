/* Function at 0x8064DD2C, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8064DD2C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x8064DD3C
    *(0x1c + r1) = r31; // stw @ 0x8064DD40
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8064DD48
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8064DD50
    *(8 + r3) = r0; // stw @ 0x8064DD54
    *(0xc + r3) = r4; // stw @ 0x8064DD58
    *(0x10 + r3) = r5; // stw @ 0x8064DD5C
    if (<=) goto 0x0x8064decc;
    /* slwi r29, r5, 2 */ // 0x8064DD64
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
    *(0 + r30) = r3; // stw @ 0x8064DD70
    r3 = r29;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* cmpwi cr1, r31, 0 */
    *(4 + r30) = r3; // stw @ 0x8064DD80
    /* li r4, 0 */ // 0x8064DD84
    if (<=) goto 0x0x8064decc;
}