/* Function at 0x80840FFC, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80840FFC(void)
{
    /* li r0, 0x708 */ // 0x80840FFC
    *(0x34 + r3) = r0; // stw @ 0x80841000
    return;
}