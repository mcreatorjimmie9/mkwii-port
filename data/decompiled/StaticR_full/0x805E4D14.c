/* Function at 0x805E4D14, size=80 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */

int FUN_805E4D14(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* li r6, 1 */ // 0x805E4D1C
    *(0x54 + r1) = r0; // stw @ 0x805E4D20
    r0 = r3 + -4; // 0x805E4D24
    *(0x4c + r1) = r31; // stw @ 0x805E4D2C
    if (>) goto 0x0x805e4ef0;
    /* lis r5, 0 */ // 0x805E4D34
    /* slwi r0, r0, 2 */ // 0x805E4D38
    r5 = r5 + 0; // 0x805E4D3C
    /* lwzx r5, r5, r0 */ // 0x805E4D40
    /* mtctr r5 */ // 0x805E4D44
    /* bctr  */ // 0x805E4D48
    /* lis r5, 0 */ // 0x805E4D4C
    /* slwi r0, r3, 2 */ // 0x805E4D54
    r5 = r5 + 0; // 0x805E4D58
    /* lwzx r31, r5, r0 */ // 0x805E4D5C
    if (==) goto 0x0x805e4d98;
}