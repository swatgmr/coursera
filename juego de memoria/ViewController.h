//
//  ViewController.h
//  juego de memoria
//
//  Created by guillermo martinez rodriguez on 15/11/15.
//  Copyright © 2015 guillermo martinez rodriguez. All rights reserved.
//

import UIKit

var numero = 0...100
for n in numero {
    
    if n == 0 {
        print ("\(n)")
    }
    if n % 5 == 0 && n > 0{
        print ("\(n) Bingo!!!")
    }
    if n % 2 == 0 && n > 0{
        print ("\(n) par!!!")
    }
    if n % 2 != 0 && n > 0{
        print ("\(n) impar!!!")
    }
    if n > 29 && n < 41{
        print ("\(n) Viva Swift!!!")
    }
}

