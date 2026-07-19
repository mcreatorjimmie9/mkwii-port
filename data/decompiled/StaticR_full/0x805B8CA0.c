/* Function at 0x805B8CA0, size=196 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_805B8CA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r23 */
    /* stmw r23, 0x2c(r1) */ // 0x805B8CB0
    r26 = r4;
    r23 = r5;
    r27 = r6;
    FUN_805E34E4(r3); // bl 0x805E34E4
    if (!=) goto 0x0x805b8cd4;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r27 = *(0xc94 + r3); // lwz @ 0x805B8CD0
    if (!=) goto 0x0x805b8ce0;
    r28 = *(0x2c + r26); // lhz @ 0x805B8CE0
    r3 = *(0x2e + r26); // lhz @ 0x805B8CE4
    r0 = *(0x30 + r26); // lhz @ 0x805B8CE8
    r24 = r28 + r3; // 0x805B8CEC
    /* add. r4, r0, r24 */ // 0x805B8CF0
    if (!=) goto 0x0x805b8d0c;
    /* li r4, -1 */ // 0x805B8CFC
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    /* li r3, 0 */ // 0x805B8D04
    /* b 0x805b8f48 */ // 0x805B8D08
    r3 = r23;
    FUN_805E364C(r4, r3, r3); // bl 0x805E364C
    if (>=) goto 0x0x805b8d24;
    /* li r29, 0 */ // 0x805B8D1C
    /* b 0x805b8d34 */ // 0x805B8D20
    /* li r29, 2 */ // 0x805B8D28
    if (>=) goto 0x0x805b8d34;
    /* li r29, 1 */ // 0x805B8D30
    /* mulli r30, r29, 0xd */ // 0x805B8D34
    /* li r28, 0 */ // 0x805B8D38
    /* li r25, 0 */ // 0x805B8D3C
    r31 = r26 + r30; // 0x805B8D40
    r24 = r31;
    r3 = *(4 + r24); // lbz @ 0x805B8D48
    FUN_805E3430(); // bl 0x805E3430
    r25 = r25 + 1; // 0x805B8D50
    r0 = r28 + r3; // 0x805B8D54
    r24 = r24 + 1; // 0x805B8D5C
    /* clrlwi r28, r0, 0x10 */ // 0x805B8D60
}