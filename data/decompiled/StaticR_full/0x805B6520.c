/* Function at 0x805B6520, size=224 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 3 function(s) */

int FUN_805B6520(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805B652C
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r0 = *(0xa4 + r3); // lbz @ 0x805B6540
    if (!=) goto 0x0x805b6554;
    /* li r3, 0 */ // 0x805B654C
    /* b 0x805b6614 */ // 0x805B6550
    r0 = *(4 + r3); // lwz @ 0x805B6554
    /* li r30, 0 */ // 0x805B6558
    /* li r29, 0 */ // 0x805B655C
    if (!=) goto 0x0x805b65a0;
    /* lis r3, 0 */ // 0x805B6568
    /* li r29, 0 */ // 0x805B656C
    r31 = *(0 + r3); // lwz @ 0x805B6570
    /* li r4, 4 */ // 0x805B6574
    /* li r6, 1 */ // 0x805B6578
    r5 = *(0x34 + r31); // lwz @ 0x805B657C
    r3 = r31 + 0xe0; // 0x805B6580
    FUN_805E3430(r4, r6, r3); // bl 0x805E3430
    r3 = r31 + 0xe0; // 0x805B6588
    r4 = r25 + 0x10; // 0x805B658C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x805b65a0;
    /* li r29, 0xff */ // 0x805B659C
    /* clrlwi. r0, r29, 0x10 */ // 0x805B65A0
    if (!=) goto 0x0x805b6610;
    /* lis r3, 0 */ // 0x805B65A8
    r3 = *(0 + r3); // lwz @ 0x805B65AC
    r0 = *(0x265 + r3); // lbz @ 0x805B65B0
    if (!=) goto 0x0x805b65c8;
    r0 = *(0xae + r25); // lbz @ 0x805B65BC
    /* extsb. r0, r0 */ // 0x805B65C0
    if (>=) goto 0x0x805b65e8;
    r4 = *(0xc + r25); // lwz @ 0x805B65C8
    r3 = r26;
    r5 = *(0x5c + r25); // lwz @ 0x805B65D0
    r7 = r27;
    r6 = *(8 + r25); // lbz @ 0x805B65D8
    r8 = r28;
    FUN_805E3430(r3, r7, r8); // bl 0x805E3430
    /* b 0x805b6604 */ // 0x805B65E4
    r4 = *(0xb4 + r25); // lwz @ 0x805B65E8
    r3 = r26;
    r5 = *(0xb0 + r25); // lwz @ 0x805B65F0
    r7 = r27;
    r8 = r28;
    /* clrlwi r6, r0, 0x10 */ // 0x805B65FC
}