/* Function at 0x806E8954, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_806E8954(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x806E8960
    r28 = r3;
    r27 = r3 + 0x5b; // 0x806E8968
    /* li r25, 0 */ // 0x806E896C
    /* li r29, 0 */ // 0x806E8970
    /* li r30, -1 */ // 0x806E8974
    /* li r31, 0xff */ // 0x806E8978
    *(0x3c + r28) = r29; // stw @ 0x806E897C
    r26 = r27;
    /* li r24, 0 */ // 0x806E8984
    *(0x38 + r28) = r29; // stw @ 0x806E8988
    *(0x40 + r28) = r29; // stw @ 0x806E898C
    *(0x44 + r28) = r29; // stw @ 0x806E8990
    *(0x48 + r28) = r29; // stw @ 0x806E8994
    *(0x4c + r28) = r29; // stw @ 0x806E8998
    *(0x50 + r28) = r29; // stw @ 0x806E899C
    *(0x54 + r28) = r30; // stw @ 0x806E89A0
    *(0x59 + r28) = r31; // stb @ 0x806E89A4
    *(0x5a + r28) = r31; // stb @ 0x806E89A8
    *(0x8b + r28) = r29; // stb @ 0x806E89AC
    r3 = r26;
    /* li r4, 0 */ // 0x806E89B4
    /* li r5, 4 */ // 0x806E89B8
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}