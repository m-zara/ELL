////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Learning Library (ELL)
//  File:     DataLoaders.h (common)
//  Authors:  Ofer Dekel
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "DataLoadArguments.h"

// data
#include "Dataset.h"
#include "ExampleIterator.h"

// model
#include "DynamicMap.h"


// stl
#include <string>
#include <iostream>

namespace ell
{
namespace common
{
    /// <summary> Gets an ExampleIterator from an input stream. </summary>
    ///
    /// <typeparam name="TextLineIteratorType"> Line iterator type. </typeparam>
    /// <typeparam name="MetadataParserType"> Metadata parser type. </typeparam>
    /// <typeparam name="DataVectorParserType"> DataVector parser type. </typeparam>
    /// <param name="stream"> Input stream to load data from. </param>
    ///
    /// <returns> The data iterator. </returns>
    template <typename TextLineIteratorType, typename MetadataParserType, typename DataVectorParserType>
    auto GetExampleIterator(std::istream& stream);

    /// <summary> Gets an AutoSupervisedExampleIterator iterator from an input stream. </summary>
    ///
    /// <param name="stream"> Input stream to load data from. </param>
    ///
    /// <returns> The data iterator. </returns>
    data::AutoSupervisedExampleIterator GetAutoSupervisedExampleIterator(std::istream& stream);

    /// <summary> Gets an AutoSupervisedMultiClassExampleIterator iterator from an input stream. </summary>
    ///
    /// <param name="stream"> Input stream to load data from. </param>
    ///
    /// <returns> The data iterator. </returns>
    data::AutoSupervisedMultiClassExampleIterator GetAutoSupervisedMultiClassExampleIterator(std::istream& stream);

    /// <summary> Gets an AutoSupervisedDataset dataset from data load arguments. </summary>
    ///
    /// <param name="stream"> Input stream to load data from. </param>
    ///
    /// <returns> The dataset. </returns>
    data::AutoSupervisedDataset GetDataset(std::istream& stream);

    /// <summary> Gets a dataset from data load arguments. </summary>
    ///
    /// <param name="stream"> Input stream to load data from. </param>
    ///
    /// <returns> The dataset. </returns>
    data::AutoSupervisedMultiClassDataset GetMultiClassDataset(std::istream& stream);

    /// <summary>
    /// Gets a new dataset by running an existing dataset through a map.
    /// </summary>
    ///
    /// <typeparam name="ExampleType"> Example type. </typeparam>
    /// <typeparam name="MapType"> Map type. </typeparam>
    ///
    /// <returns> The transformed dataset. </returns>
    template <typename ExampleType, typename MapType>
    auto TransformDataset(data::Dataset<ExampleType>& input, const MapType& map);
}
}

#include "../tcc/DataLoaders.tcc"
