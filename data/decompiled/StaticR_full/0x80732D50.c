/* Function at 0x80732D50, size=76 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_80732D50(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* li r5, 1 */ // 0x80732D58
    /* li r6, 3 */ // 0x80732D5C
    *(0x24 + r1) = r0; // stw @ 0x80732D60
    /* li r7, 3 */ // 0x80732D68
    /* li r8, 5 */ // 0x80732D6C
    r10 = *(0x7c8 + r3); // lwz @ 0x80732D70
    r0 = *(0x7cc + r3); // lwz @ 0x80732D74
    *(0xc + r1) = r0; // stw @ 0x80732D78
    *(8 + r1) = r10; // stw @ 0x80732D7C
    r0 = *(0x7d0 + r3); // lwz @ 0x80732D80
    *(0x10 + r1) = r0; // stw @ 0x80732D84
    FUN_80732B38(); // bl 0x80732B38
    r0 = *(0x24 + r1); // lwz @ 0x80732D8C
    return;
}