/* Function at 0x80800958, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80800958(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* addic. r0, r3, 0x124 */ // 0x80800964
    *(0xc + r1) = r31; // stw @ 0x80800968
    *(8 + r1) = r30; // stw @ 0x8080096C
    r30 = r3;
    if (!=) goto 0x0x80800994;
    /* lis r3, 0 */ // 0x80800978
    /* lis r5, 0 */ // 0x8080097C
    r3 = r3 + 0; // 0x80800980
    /* li r4, 0xcf */ // 0x80800984
    r5 = r5 + 0; // 0x80800988
    /* crclr cr1eq */ // 0x8080098C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r0 = *(0x12c + r30); // lhz @ 0x80800994
    if (<=) goto 0x0x808009f4;
    r3 = r30 + 0x124; // 0x808009A0
    /* li r4, 0 */ // 0x808009A4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r31 = r3;
    r3 = r30;
    r4 = *(0 + r31); // lwz @ 0x808009B4
    r5 = *(4 + r31); // lwz @ 0x808009B8
    r6 = *(8 + r31); // lwz @ 0x808009BC
    r7 = *(0xc + r31); // lwz @ 0x808009C0
}