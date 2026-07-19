/* Function at 0x808EAB98, size=208 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_808EAB98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r26 */
    /* stmw r26, 0x38(r1) */ // 0x808EABA4
    r26 = r3;
    r27 = r4;
    FUN_808CFA50(); // bl 0x808CFA50
    r4 = *(0x654 + r26); // lwz @ 0x808EABB4
    /* mulli r29, r27, 0x174 */ // 0x808EABB8
    r0 = *(0x6c4 + r26); // lwz @ 0x808EABBC
    /* clrlwi r28, r3, 0x18 */ // 0x808EABC0
    r3 = r4 + 1; // 0x808EABC4
    *(0x654 + r26) = r3; // stw @ 0x808EABC8
    r3 = r26;
    r5 = r0 + r29; // 0x808EABD0
    /* li r6, 0 */ // 0x808EABD4
    FUN_80671C2C(r3, r3, r6); // bl 0x80671C2C
    r3 = *(0x6c4 + r26); // lwz @ 0x808EABDC
    r0 = r27 + 2; // 0x808EABE4
    r31 = r3 + r29; // 0x808EABE8
    if (>) goto 0x0x808eabf4;
    r0 = r27;
    /* lis r30, 0 */ // 0x808EABF8
    r30 = r30 + 0; // 0x808EABFC
    if (>=) goto 0x0x808eac0c;
    /* lis r30, 0 */ // 0x808EAC04
    r30 = r30 + 0; // 0x808EAC08
    /* lis r5, 0 */ // 0x808EAC10
    r0 = r27 + 2; // 0x808EAC18
    r5 = r5 + 0; // 0x808EAC1C
    /* li r4, 4 */ // 0x808EAC20
    if (>) goto 0x0x808eac2c;
    r0 = r27;
    if (>=) goto 0x0x808eac48;
    r6 = r27 + 2; // 0x808EAC38
    if (>) goto 0x0x808eac5c;
    r6 = r27;
    /* b 0x808eac5c */ // 0x808EAC44
    r6 = r27 + 2; // 0x808EAC4C
    if (>) goto 0x0x808eac58;
    r6 = r27;
    r6 = r6 + -2; // 0x808EAC58
    r6 = r6 + 1; // 0x808EAC5C
    /* crclr cr1eq */ // 0x808EAC60
    FUN_805E3430(r6, r6, r6); // bl 0x805E3430
}