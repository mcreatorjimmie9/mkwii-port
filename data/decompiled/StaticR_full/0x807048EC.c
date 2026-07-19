/* Function at 0x807048EC, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_807048EC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807048F8
    *(0xc + r1) = r31; // stw @ 0x807048FC
    r31 = r5;
    if (!=) goto 0x0x80704974;
    r5 = *(0x10 + r5); // lwz @ 0x80704908
    if (!=) goto 0x0x80704940;
    r3 = *(0 + r4); // lwz @ 0x80704914
    r0 = *(8 + r3); // lwz @ 0x80704918
    if (!=) goto 0x0x80704938;
    r4 = r5;
    r3 = r31;
    /* li r5, 1 */ // 0x8070492C
    FUN_80704DE0(r4, r3, r5); // bl 0x80704DE0
    /* b 0x80704984 */ // 0x80704934
    r3 = *(0x18 + r3); // lwz @ 0x80704938
    /* b 0x80704948 */ // 0x8070493C
    r3 = *(0 + r4); // lwz @ 0x80704940
    r3 = *(8 + r3); // lwz @ 0x80704944
    /* lis r6, 0 */ // 0x80704948
    r7 = r31;
    /* li r4, 0x2800 */ // 0x80704950
    /* li r5, 1 */ // 0x80704954
    r6 = r6 + 0; // 0x80704958
    FUN_805E3430(r6, r7, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x80704984;
    r3 = r31;
    FUN_80704EC8(r6, r3); // bl 0x80704EC8
    /* b 0x80704984 */ // 0x80704970
    r4 = *(0x10 + r5); // lwz @ 0x80704974
    r3 = r31;
    /* li r5, 1 */ // 0x8070497C
    FUN_80704DE0(r3, r5); // bl 0x80704DE0
}