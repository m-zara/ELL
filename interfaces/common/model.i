////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     model.i (interfaces)
//  Authors:  Chuck Jacobs
//
////////////////////////////////////////////////////////////////////////////////////////////////////

%{
#define SWIG_FILE_WITH_INIT
#include "../../libraries/model/include/Node.h"
#include "ModelGraph.h"
#include "Port.h"
#include "InputPort.h"
#include "OutputPort.h"
#include "OutputPortElementList.h"
%}

%rename (ModelGraph) model::Model;

// Necessary because of node.js's header file...'

%include "Port.h"
%include "OutputPortElementList.h"
%include "../../libraries/model/include/Node.h"
%include "ModelGraph.h"
%include "InputPort.h"
%include "OutputPort.h"

%template () model::OutputPort<double>;
%template () model::OutputPortElementList<double>;
