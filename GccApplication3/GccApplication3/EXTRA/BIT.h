/*
 * BIT.h
 *
 * Created: 12-Sep-22 01:15:23
 *  Author: Alaa Attia
 */ 


#ifndef BIT_H_
#define BIT_H_


#define SET_BIT(REG, BIT_NO)		(REG |= (1U<<(BIT_NO)))
#define CLEAR_BIT(REG, BIT_NO)		(REG &= (~(1U<<(BIT_NO))))
#define TOGGLE_BIT(REG, BIT_NO)		(REG ^= (1U<<(BIT_NO)))
#define READ_BIT(REG, BIT_NO)		((REG>>(BIT_NO)) & 1U)




#endif /* BIT_H_ */